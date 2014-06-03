<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (version 1.7.0_55) on Wed May 21 12:21:16 CEST 2014 -->
<title>Cassandra.AsyncClient.set_keyspace_call (apache-cassandra API)</title>
<meta name="date" content="2014-05-21">
<link rel="stylesheet" type="text/css" href="../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    if (location.href.indexOf('is-external=true') == -1) {
        parent.document.title="Cassandra.AsyncClient.set_keyspace_call (apache-cassandra API)";
    }
//-->
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar_top">
<!--   -->
</a><a href="#skip-navbar_top" title="Skip navigation links"></a><a name="navbar_top_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/Cassandra.AsyncClient.set_keyspace_call.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.set_cql_version_call.html" title="class in org.apache.cassandra.thrift"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.system_add_column_family_call.html" title="class in org.apache.cassandra.thrift"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/cassandra/thrift/Cassandra.AsyncClient.set_keyspace_call.html" target="_top">Frames</a></li>
<li><a href="Cassandra.AsyncClient.set_keyspace_call.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../allclasses-noframe.html">All Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li><a href="#nested_classes_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">Nested</a>&nbsp;|&nbsp;</li>
<li><a href="#fields_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor_summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor_detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_detail">Method</a></li>
</ul>
</div>
<a name="skip-navbar_top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">org.apache.cassandra.thrift</div>
<h2 title="Class Cassandra.AsyncClient.set_keyspace_call" class="title">Class Cassandra.AsyncClient.set_keyspace_call</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li>java.lang.Object</li>
<li>
<ul class="inheritance">
<li>org.apache.thrift.async.TAsyncMethodCall</li>
<li>
<ul class="inheritance">
<li>org.apache.cassandra.thrift.Cassandra.AsyncClient.set_keyspace_call</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>Enclosing class:</dt>
<dd><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.html" title="class in org.apache.cassandra.thrift">Cassandra.AsyncClient</a></dd>
</dl>
<hr>
<br>
<pre>public static class <span class="strong">Cassandra.AsyncClient.set_keyspace_call</span>
extends org.apache.thrift.async.TAsyncMethodCall</pre>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- ======== NESTED CLASS SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="nested_class_summary">
<!--   -->
</a>
<h3>Nested Class Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="nested_classes_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">
<!--   -->
</a>
<h3>Nested classes/interfaces inherited from class&nbsp;org.apache.thrift.async.TAsyncMethodCall</h3>
<code>org.apache.thrift.async.TAsyncMethodCall.State</code></li>
</ul>
</li>
</ul>
<!-- =========== FIELD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="field_summary">
<!--   -->
</a>
<h3>Field Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="fields_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">
<!--   -->
</a>
<h3>Fields inherited from class&nbsp;org.apache.thrift.async.TAsyncMethodCall</h3>
<code>client, transport</code></li>
</ul>
</li>
</ul>
<!-- ======== CONSTRUCTOR SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor_summary">
<!--   -->
</a>
<h3>Constructor Summary</h3>
<table class="overviewSummary" border="0" cellpadding="3" cellspacing="0" summary="Constructor Summary table, listing constructors, and an explanation">
<caption><span>Constructors</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colOne"><code><strong><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.set_keyspace_call.html#Cassandra.AsyncClient.set_keyspace_call(java.lang.String, org.apache.thrift.async.AsyncMethodCallback, org.apache.thrift.async.TAsyncClient, org.apache.thrift.protocol.TProtocolFactory, org.apache.thrift.transport.TNonblockingTransport)">Cassandra.AsyncClient.set_keyspace_call</a></strong>(java.lang.String&nbsp;keyspace,
                                       org.apache.thrift.async.AsyncMethodCallback&nbsp;resultHandler,
                                       org.apache.thrift.async.TAsyncClient&nbsp;client,
                                       org.apache.thrift.protocol.TProtocolFactory&nbsp;protocolFactory,
                                       org.apache.thrift.transport.TNonblockingTransport&nbsp;transport)</code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method_summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<table class="overviewSummary" border="0" cellpadding="3" cellspacing="0" summary="Method Summary table, listing methods, and an explanation">
<caption><span>Methods</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.set_keyspace_call.html#getResult()">getResult</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.set_keyspace_call.html#write_args(org.apache.thrift.protocol.TProtocol)">write_args</a></strong>(org.apache.thrift.protocol.TProtocol&nbsp;prot)</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.thrift.async.TAsyncMethodCall</h3>
<code>getClient, getFrameBuffer, getSequenceId, getStartTime, getState, getTimeoutTimestamp, hasTimeout, isFinished, onError, prepareMethodCall, transition</code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.Object</h3>
<code>clone, equals, finalize, getClass, hashCode, notify, notifyAll, toString, wait, wait, wait</code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor_detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="Cassandra.AsyncClient.set_keyspace_call(java.lang.String, org.apache.thrift.async.AsyncMethodCallback, org.apache.thrift.async.TAsyncClient, org.apache.thrift.protocol.TProtocolFactory, org.apache.thrift.transport.TNonblockingTransport)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>Cassandra.AsyncClient.set_keyspace_call</h4>
<pre>public&nbsp;Cassandra.AsyncClient.set_keyspace_call(java.lang.String&nbsp;keyspace,
                                       org.apache.thrift.async.AsyncMethodCallback&nbsp;resultHandler,
                                       org.apache.thrift.async.TAsyncClient&nbsp;client,
                                       org.apache.thrift.protocol.TProtocolFactory&nbsp;protocolFactory,
                                       org.apache.thrift.transport.TNonblockingTransport&nbsp;transport)
                                        throws org.apache.thrift.TException</pre>
<dl><dt><span class="strong">Throws:</span></dt>
<dd><code>org.apache.thrift.TException</code></dd></dl>
</li>
</ul>
</li>
</ul>
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method_detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="write_args(org.apache.thrift.protocol.TProtocol)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>write_args</h4>
<pre>public&nbsp;void&nbsp;write_args(org.apache.thrift.protocol.TProtocol&nbsp;prot)
                throws org.apache.thrift.TException</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>write_args</code>&nbsp;in class&nbsp;<code>org.apache.thrift.async.TAsyncMethodCall</code></dd>
<dt><span class="strong">Throws:</span></dt>
<dd><code>org.apache.thrift.TException</code></dd></dl>
</li>
</ul>
<a name="getResult()">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>getResult</h4>
<pre>public&nbsp;void&nbsp;getResult()
               throws <a href="../../../../org/apache/cassandra/thrift/InvalidRequestException.html" title="class in org.apache.cassandra.thrift">InvalidRequestException</a>,
                      org.apache.thrift.TException</pre>
<dl><dt><span class="strong">Throws:</span></dt>
<dd><code><a href="../../../../org/apache/cassandra/thrift/InvalidRequestException.html" title="class in org.apache.cassandra.thrift">InvalidRequestException</a></code></dd>
<dd><code>org.apache.thrift.TException</code></dd></dl>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
<!-- ========= END OF CLASS DATA ========= -->
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar_bottom">
<!--   -->
</a><a href="#skip-navbar_bottom" title="Skip navigation links"></a><a name="navbar_bottom_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/Cassandra.AsyncClient.set_keyspace_call.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.set_cql_version_call.html" title="class in org.apache.cassandra.thrift"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../org/apache/cassandra/thrift/Cassandra.AsyncClient.system_add_column_family_call.html" title="class in org.apache.cassandra.thrift"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/cassandra/thrift/Cassandra.AsyncClient.set_keyspace_call.html" target="_top">Frames</a></li>
<li><a href="Cassandra.AsyncClient.set_keyspace_call.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../allclasses-noframe.html">All Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li><a href="#nested_classes_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">Nested</a>&nbsp;|&nbsp;</li>
<li><a href="#fields_inherited_from_class_org.apache.thrift.async.TAsyncMethodCall">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor_summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor_detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_detail">Method</a></li>
</ul>
</div>
<a name="skip-navbar_bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &copy; 2014 The Apache Software Foundation</small></p>
</body>
</html>