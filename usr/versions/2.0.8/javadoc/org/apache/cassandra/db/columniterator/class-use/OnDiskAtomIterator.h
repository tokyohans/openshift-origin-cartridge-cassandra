<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (version 1.7.0_55) on Wed May 21 12:21:31 CEST 2014 -->
<title>Uses of Interface org.apache.cassandra.db.columniterator.OnDiskAtomIterator (apache-cassandra API)</title>
<meta name="date" content="2014-05-21">
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    if (location.href.indexOf('is-external=true') == -1) {
        parent.document.title="Uses of Interface org.apache.cassandra.db.columniterator.OnDiskAtomIterator (apache-cassandra API)";
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
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../../../../../../overview-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/cassandra/db/columniterator/class-use/OnDiskAtomIterator.html" target="_top">Frames</a></li>
<li><a href="OnDiskAtomIterator.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../../allclasses-noframe.html">All Classes</a></li>
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
<h2 title="Uses of Interface org.apache.cassandra.db.columniterator.OnDiskAtomIterator" class="title">Uses of Interface<br>org.apache.cassandra.db.columniterator.OnDiskAtomIterator</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.cassandra.db.columniterator">org.apache.cassandra.db.columniterator</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.cassandra.db.compaction">org.apache.cassandra.db.compaction</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.cassandra.db.filter">org.apache.cassandra.db.filter</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.cassandra.io.sstable">org.apache.cassandra.io.sstable</a></td>
<td class="colLast">&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="org.apache.cassandra.db.columniterator">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a> in <a href="../../../../../../org/apache/cassandra/db/columniterator/package-summary.html">org.apache.cassandra.db.columniterator</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing classes, and an explanation">
<caption><span>Classes in <a href="../../../../../../org/apache/cassandra/db/columniterator/package-summary.html">org.apache.cassandra.db.columniterator</a> that implement <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Class and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/db/columniterator/LazyColumnIterator.html" title="class in org.apache.cassandra.db.columniterator">LazyColumnIterator</a></strong></code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/db/columniterator/SimpleAbstractColumnIterator.html" title="class in org.apache.cassandra.db.columniterator">SimpleAbstractColumnIterator</a></strong></code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/db/columniterator/SSTableNamesIterator.html" title="class in org.apache.cassandra.db.columniterator">SSTableNamesIterator</a></strong></code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/db/columniterator/SSTableSliceIterator.html" title="class in org.apache.cassandra.db.columniterator">SSTableSliceIterator</a></strong></code>
<div class="block">A Column Iterator over SSTable</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/cassandra/db/columniterator/package-summary.html">org.apache.cassandra.db.columniterator</a> that return <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">IColumnIteratorFactory.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/columniterator/IColumnIteratorFactory.html#create()">create</a></strong>()</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.db.compaction">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a> in <a href="../../../../../../org/apache/cassandra/db/compaction/package-summary.html">org.apache.cassandra.db.compaction</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/cassandra/db/compaction/package-summary.html">org.apache.cassandra.db.compaction</a> with parameters of type <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">CompactionIterable.Reducer.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/compaction/CompactionIterable.Reducer.html#reduce(org.apache.cassandra.db.columniterator.OnDiskAtomIterator)">reduce</a></strong>(<a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a>&nbsp;current)</code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructor parameters in <a href="../../../../../../org/apache/cassandra/db/compaction/package-summary.html">org.apache.cassandra.db.compaction</a> with type arguments of type <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/db/compaction/LazilyCompactedRow.html#LazilyCompactedRow(org.apache.cassandra.db.compaction.CompactionController, java.util.List)">LazilyCompactedRow</a></strong>(<a href="../../../../../../org/apache/cassandra/db/compaction/CompactionController.html" title="class in org.apache.cassandra.db.compaction">CompactionController</a>&nbsp;controller,
                  java.util.List&lt;? extends <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a>&gt;&nbsp;rows)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.db.filter">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a> in <a href="../../../../../../org/apache/cassandra/db/filter/package-summary.html">org.apache.cassandra.db.filter</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/cassandra/db/filter/package-summary.html">org.apache.cassandra.db.filter</a> that return <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">QueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/QueryFilter.html#getColumnFamilyIterator(org.apache.cassandra.db.ColumnFamily)">getColumnFamilyIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/db/ColumnFamily.html" title="class in org.apache.cassandra.db">ColumnFamily</a>&nbsp;cf)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">IDiskAtomFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/IDiskAtomFilter.html#getColumnFamilyIterator(org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.ColumnFamily)">getColumnFamilyIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                       <a href="../../../../../../org/apache/cassandra/db/ColumnFamily.html" title="class in org.apache.cassandra.db">ColumnFamily</a>&nbsp;cf)</code>
<div class="block">returns an iterator that returns columns from the given columnFamily
 matching the Filter criteria in sorted order.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">NamesQueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/NamesQueryFilter.html#getColumnFamilyIterator(org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.ColumnFamily)">getColumnFamilyIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                       <a href="../../../../../../org/apache/cassandra/db/ColumnFamily.html" title="class in org.apache.cassandra.db">ColumnFamily</a>&nbsp;cf)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">SliceQueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/SliceQueryFilter.html#getColumnFamilyIterator(org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.ColumnFamily)">getColumnFamilyIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                       <a href="../../../../../../org/apache/cassandra/db/ColumnFamily.html" title="class in org.apache.cassandra.db">ColumnFamily</a>&nbsp;cf)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">QueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/QueryFilter.html#getMemtableColumnIterator(org.apache.cassandra.db.Memtable)">getMemtableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/db/Memtable.html" title="class in org.apache.cassandra.db">Memtable</a>&nbsp;memtable)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">QueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/QueryFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">IDiskAtomFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/IDiskAtomFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.db.DecoratedKey)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key)</code>
<div class="block">returns an iterator that returns columns from the given SSTable
 matching the Filter criteria in sorted order.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">NamesQueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/NamesQueryFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.db.DecoratedKey)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">SliceQueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/SliceQueryFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.db.DecoratedKey)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">IDiskAtomFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/IDiskAtomFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.io.util.FileDataInput, org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.RowIndexEntry)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/io/util/FileDataInput.html" title="interface in org.apache.cassandra.io.util">FileDataInput</a>&nbsp;file,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                        <a href="../../../../../../org/apache/cassandra/db/RowIndexEntry.html" title="class in org.apache.cassandra.db">RowIndexEntry</a>&nbsp;indexEntry)</code>
<div class="block">Get an iterator that returns columns from the given SSTable using the opened file
 matching the Filter criteria in sorted order.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">NamesQueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/NamesQueryFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.io.util.FileDataInput, org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.RowIndexEntry)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/io/util/FileDataInput.html" title="interface in org.apache.cassandra.io.util">FileDataInput</a>&nbsp;file,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                        <a href="../../../../../../org/apache/cassandra/db/RowIndexEntry.html" title="class in org.apache.cassandra.db">RowIndexEntry</a>&nbsp;indexEntry)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">QueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/QueryFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.io.util.FileDataInput, org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.RowIndexEntry)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/io/util/FileDataInput.html" title="interface in org.apache.cassandra.io.util">FileDataInput</a>&nbsp;file,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                        <a href="../../../../../../org/apache/cassandra/db/RowIndexEntry.html" title="class in org.apache.cassandra.db">RowIndexEntry</a>&nbsp;indexEntry)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">SliceQueryFilter.</span><code><strong><a href="../../../../../../org/apache/cassandra/db/filter/SliceQueryFilter.html#getSSTableColumnIterator(org.apache.cassandra.io.sstable.SSTableReader, org.apache.cassandra.io.util.FileDataInput, org.apache.cassandra.db.DecoratedKey, org.apache.cassandra.db.RowIndexEntry)">getSSTableColumnIterator</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.html" title="class in org.apache.cassandra.io.sstable">SSTableReader</a>&nbsp;sstable,
                        <a href="../../../../../../org/apache/cassandra/io/util/FileDataInput.html" title="interface in org.apache.cassandra.io.util">FileDataInput</a>&nbsp;file,
                        <a href="../../../../../../org/apache/cassandra/db/DecoratedKey.html" title="class in org.apache.cassandra.db">DecoratedKey</a>&nbsp;key,
                        <a href="../../../../../../org/apache/cassandra/db/RowIndexEntry.html" title="class in org.apache.cassandra.db">RowIndexEntry</a>&nbsp;indexEntry)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.io.sstable">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a> in <a href="../../../../../../org/apache/cassandra/io/sstable/package-summary.html">org.apache.cassandra.io.sstable</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing classes, and an explanation">
<caption><span>Classes in <a href="../../../../../../org/apache/cassandra/io/sstable/package-summary.html">org.apache.cassandra.io.sstable</a> that implement <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Class and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/io/sstable/SSTableIdentityIterator.html" title="class in org.apache.cassandra.io.sstable">SSTableIdentityIterator</a></strong></code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing fields, and an explanation">
<caption><span>Fields in <a href="../../../../../../org/apache/cassandra/io/sstable/package-summary.html">org.apache.cassandra.io.sstable</a> with type parameters of type <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Field and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>protected java.util.Iterator&lt;<a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a>&gt;</code></td>
<td class="colLast"><span class="strong">SSTableScanner.</span><code><strong><a href="../../../../../../org/apache/cassandra/io/sstable/SSTableScanner.html#iterator">iterator</a></strong></code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/cassandra/io/sstable/package-summary.html">org.apache.cassandra.io.sstable</a> that return <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">SSTableScanner.KeyScanningIterator.</span><code><strong><a href="../../../../../../org/apache/cassandra/io/sstable/SSTableScanner.KeyScanningIterator.html#computeNext()">computeNext</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">SSTableReader.EmptyCompactionScanner.</span><code><strong><a href="../../../../../../org/apache/cassandra/io/sstable/SSTableReader.EmptyCompactionScanner.html#next()">next</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">OnDiskAtomIterator</a></code></td>
<td class="colLast"><span class="strong">SSTableScanner.</span><code><strong><a href="../../../../../../org/apache/cassandra/io/sstable/SSTableScanner.html#next()">next</a></strong>()</code>&nbsp;</td>
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
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../org/apache/cassandra/db/columniterator/OnDiskAtomIterator.html" title="interface in org.apache.cassandra.db.columniterator">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../../../../../../overview-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/cassandra/db/columniterator/class-use/OnDiskAtomIterator.html" target="_top">Frames</a></li>
<li><a href="OnDiskAtomIterator.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../../allclasses-noframe.html">All Classes</a></li>
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