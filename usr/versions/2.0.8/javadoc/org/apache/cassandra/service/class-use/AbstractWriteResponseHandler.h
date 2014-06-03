<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (version 1.7.0_55) on Wed May 21 12:21:31 CEST 2014 -->
<title>Uses of Class org.apache.cassandra.service.AbstractWriteResponseHandler (apache-cassandra API)</title>
<meta name="date" content="2014-05-21">
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    if (location.href.indexOf('is-external=true') == -1) {
        parent.document.title="Uses of Class org.apache.cassandra.service.AbstractWriteResponseHandler (apache-cassandra API)";
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
<li><a href="../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../../../../../overview-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/cassandra/service/class-use/AbstractWriteResponseHandler.html" target="_top">Frames</a></li>
<li><a href="AbstractWriteResponseHandler.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../allclasses-noframe.html">All Classes</a></li>
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
<a name="skip-navbar_top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<div class="header">
<h2 title="Uses of Class org.apache.cassandra.service.AbstractWriteResponseHandler" class="title">Uses of Class<br>org.apache.cassandra.service.AbstractWriteResponseHandler</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.cassandra.locator">org.apache.cassandra.locator</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.cassandra.net">org.apache.cassandra.net</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.cassandra.service">org.apache.cassandra.service</a></td>
<td class="colLast">&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="org.apache.cassandra.locator">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a> in <a href="../../../../../org/apache/cassandra/locator/package-summary.html">org.apache.cassandra.locator</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../org/apache/cassandra/locator/package-summary.html">org.apache.cassandra.locator</a> that return <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></code></td>
<td class="colLast"><span class="strong">AbstractReplicationStrategy.</span><code><strong><a href="../../../../../org/apache/cassandra/locator/AbstractReplicationStrategy.html#getWriteResponseHandler(java.util.Collection, java.util.Collection, org.apache.cassandra.db.ConsistencyLevel, java.lang.Runnable, org.apache.cassandra.db.WriteType)">getWriteResponseHandler</a></strong>(java.util.Collection&lt;java.net.InetAddress&gt;&nbsp;naturalEndpoints,
                       java.util.Collection&lt;java.net.InetAddress&gt;&nbsp;pendingEndpoints,
                       <a href="../../../../../org/apache/cassandra/db/ConsistencyLevel.html" title="enum in org.apache.cassandra.db">ConsistencyLevel</a>&nbsp;consistency_level,
                       java.lang.Runnable&nbsp;callback,
                       <a href="../../../../../org/apache/cassandra/db/WriteType.html" title="enum in org.apache.cassandra.db">WriteType</a>&nbsp;writeType)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.net">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a> in <a href="../../../../../org/apache/cassandra/net/package-summary.html">org.apache.cassandra.net</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../org/apache/cassandra/net/package-summary.html">org.apache.cassandra.net</a> with parameters of type <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><span class="strong">MessagingService.</span><code><strong><a href="../../../../../org/apache/cassandra/net/MessagingService.html#sendRR(org.apache.cassandra.net.MessageOut, java.net.InetAddress, org.apache.cassandra.service.AbstractWriteResponseHandler, boolean)">sendRR</a></strong>(<a href="../../../../../org/apache/cassandra/net/MessageOut.html" title="class in org.apache.cassandra.net">MessageOut</a>&lt;? extends <a href="../../../../../org/apache/cassandra/db/IMutation.html" title="interface in org.apache.cassandra.db">IMutation</a>&gt;&nbsp;message,
      java.net.InetAddress&nbsp;to,
      <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a>&nbsp;handler,
      boolean&nbsp;allowHints)</code>
<div class="block">Send a mutation message to a given endpoint.</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.service">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a> in <a href="../../../../../org/apache/cassandra/service/package-summary.html">org.apache.cassandra.service</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing subclasses, and an explanation">
<caption><span>Subclasses of <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a> in <a href="../../../../../org/apache/cassandra/service/package-summary.html">org.apache.cassandra.service</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Class and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/cassandra/service/DatacenterSyncWriteResponseHandler.html" title="class in org.apache.cassandra.service">DatacenterSyncWriteResponseHandler</a></strong></code>
<div class="block">This class blocks for a quorum of responses _in all datacenters_ (CL.EACH_QUORUM).</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/cassandra/service/DatacenterWriteResponseHandler.html" title="class in org.apache.cassandra.service">DatacenterWriteResponseHandler</a></strong></code>
<div class="block">This class blocks for a quorum of responses _in the local datacenter only_ (CL.LOCAL_QUORUM).</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/cassandra/service/WriteResponseHandler.html" title="class in org.apache.cassandra.service">WriteResponseHandler</a></strong></code>
<div class="block">Handles blocking writes for ONE, ANY, TWO, THREE, QUORUM, and ALL consistency levels.</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../org/apache/cassandra/service/package-summary.html">org.apache.cassandra.service</a> that return <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></code></td>
<td class="colLast"><span class="strong">StorageProxy.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.html#applyCounterMutationOnCoordinator(org.apache.cassandra.db.CounterMutation, java.lang.String)">applyCounterMutationOnCoordinator</a></strong>(<a href="../../../../../org/apache/cassandra/db/CounterMutation.html" title="class in org.apache.cassandra.db">CounterMutation</a>&nbsp;cm,
                                 java.lang.String&nbsp;localDataCenter)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></code></td>
<td class="colLast"><span class="strong">StorageProxy.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.html#applyCounterMutationOnLeader(org.apache.cassandra.db.CounterMutation, java.lang.String, java.lang.Runnable)">applyCounterMutationOnLeader</a></strong>(<a href="../../../../../org/apache/cassandra/db/CounterMutation.html" title="class in org.apache.cassandra.db">CounterMutation</a>&nbsp;cm,
                            java.lang.String&nbsp;localDataCenter,
                            java.lang.Runnable&nbsp;callback)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></code></td>
<td class="colLast"><span class="strong">StorageProxy.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.html#mutateCounter(org.apache.cassandra.db.CounterMutation, java.lang.String)">mutateCounter</a></strong>(<a href="../../../../../org/apache/cassandra/db/CounterMutation.html" title="class in org.apache.cassandra.db">CounterMutation</a>&nbsp;cm,
             java.lang.String&nbsp;localDataCenter)</code>
<div class="block">Handle counter mutation on the coordinator host.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></code></td>
<td class="colLast"><span class="strong">StorageProxy.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.html#performWrite(org.apache.cassandra.db.IMutation, org.apache.cassandra.db.ConsistencyLevel, java.lang.String, org.apache.cassandra.service.StorageProxy.WritePerformer, java.lang.Runnable, org.apache.cassandra.db.WriteType)">performWrite</a></strong>(<a href="../../../../../org/apache/cassandra/db/IMutation.html" title="interface in org.apache.cassandra.db">IMutation</a>&nbsp;mutation,
            <a href="../../../../../org/apache/cassandra/db/ConsistencyLevel.html" title="enum in org.apache.cassandra.db">ConsistencyLevel</a>&nbsp;consistency_level,
            java.lang.String&nbsp;localDataCenter,
            <a href="../../../../../org/apache/cassandra/service/StorageProxy.WritePerformer.html" title="interface in org.apache.cassandra.service">StorageProxy.WritePerformer</a>&nbsp;performer,
            java.lang.Runnable&nbsp;callback,
            <a href="../../../../../org/apache/cassandra/db/WriteType.html" title="enum in org.apache.cassandra.db">WriteType</a>&nbsp;writeType)</code>
<div class="block">Perform the write of a mutation given a WritePerformer.</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../org/apache/cassandra/service/package-summary.html">org.apache.cassandra.service</a> with parameters of type <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">StorageProxy.WritePerformer.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.WritePerformer.html#apply(org.apache.cassandra.db.IMutation, java.lang.Iterable, org.apache.cassandra.service.AbstractWriteResponseHandler, java.lang.String, org.apache.cassandra.db.ConsistencyLevel)">apply</a></strong>(<a href="../../../../../org/apache/cassandra/db/IMutation.html" title="interface in org.apache.cassandra.db">IMutation</a>&nbsp;mutation,
     java.lang.Iterable&lt;java.net.InetAddress&gt;&nbsp;targets,
     <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a>&nbsp;responseHandler,
     java.lang.String&nbsp;localDataCenter,
     <a href="../../../../../org/apache/cassandra/db/ConsistencyLevel.html" title="enum in org.apache.cassandra.db">ConsistencyLevel</a>&nbsp;consistency_level)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static void</code></td>
<td class="colLast"><span class="strong">StorageProxy.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.html#sendToHintedEndpoints(org.apache.cassandra.db.RowMutation, java.lang.Iterable, org.apache.cassandra.service.AbstractWriteResponseHandler, java.lang.String)">sendToHintedEndpoints</a></strong>(<a href="../../../../../org/apache/cassandra/db/RowMutation.html" title="class in org.apache.cassandra.db">RowMutation</a>&nbsp;rm,
                     java.lang.Iterable&lt;java.net.InetAddress&gt;&nbsp;targets,
                     <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a>&nbsp;responseHandler,
                     java.lang.String&nbsp;localDataCenter)</code>
<div class="block">Send the mutations to the right targets, write it locally if it corresponds or writes a hint when the node
 is not available.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static java.util.concurrent.Future&lt;java.lang.Void&gt;</code></td>
<td class="colLast"><span class="strong">StorageProxy.</span><code><strong><a href="../../../../../org/apache/cassandra/service/StorageProxy.html#submitHint(org.apache.cassandra.db.RowMutation, java.net.InetAddress, org.apache.cassandra.service.AbstractWriteResponseHandler)">submitHint</a></strong>(<a href="../../../../../org/apache/cassandra/db/RowMutation.html" title="class in org.apache.cassandra.db">RowMutation</a>&nbsp;mutation,
          java.net.InetAddress&nbsp;target,
          <a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">AbstractWriteResponseHandler</a>&nbsp;responseHandler)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
</ul>
</li>
</ul>
</div>
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar_bottom">
<!--   -->
</a><a href="#skip-navbar_bottom" title="Skip navigation links"></a><a name="navbar_bottom_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../org/apache/cassandra/service/AbstractWriteResponseHandler.html" title="class in org.apache.cassandra.service">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../../../../../overview-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/cassandra/service/class-use/AbstractWriteResponseHandler.html" target="_top">Frames</a></li>
<li><a href="AbstractWriteResponseHandler.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../allclasses-noframe.html">All Classes</a></li>
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
<a name="skip-navbar_bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &copy; 2014 The Apache Software Foundation</small></p>
</body>
</html>