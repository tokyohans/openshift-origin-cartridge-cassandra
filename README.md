# OpenShift Cassandra Cartridge

The `cassandra` cartridge provides [Cassandra](http://cassandra.apache.org/) on OpenShift.

## Versions

This cartridge supports cassandra version 2.2.6. The Cartridge comes with cassandra 2.2.6 
out of the box, and you can easily add new versions to the cartridge by adding them to usr/versions and metadata/manifest.yml
accordingly. 

## Downloadable Cartridge

The cartridge is growing in size, and since there is a restriction on downloadable cartridges to be downloaded within 10s it depends on your internet connection whether the download will finish successfully, or whether you have to install the cartridge manually. The downloadable URL is : https://raw.github.com/juhoffma/openshift-origin-cartridge-cassandra/master/metadata/manifest.yml

Simply use with 'rhc' client tools - rhc cartridge add https://raw.github.com/juhoffma/openshift-origin-cartridge-cassandra/master/metadata/manifest.yml --app <existing_app_name>

## Manual Installation

Simply download the zipfile of the repository and put it into '/usr/libexec/openshift/cartridges/openshift-origin-cartridge-cassandra' and run the following command on the node(s)

```
oo-admin-cartridge --action install --source /usr/libexec/openshift/cartridges/openshift-origin-cartridge-cassandra/
```

then on the broker run:

```
# oo-admin-ctl-cartridge --activate -c import-node --obsolete
# oo-admin-broker-cache --clear
# oo-admin-console-cache --clear
```

that will make the cartridge available for deployment.

## Environment Variables

The `cassandra` cartridge provides several environment variables to reference for ease
of use:

    OPENSHIFT_CASSANDRA_HOST      The Cassandra IP address
    OPENSHIFT_CASSANDRA_PORT      The Cassandra port
    OPENSHIFT_CASSANDRA_LOG_DIR   The path to the Cassandra log directory

For more information about environment variables, consult the
[OpenShift Application Author Guide](https://github.com/openshift/origin-server/blob/master/node/README.writing_applications.md).

