<?php $nd=node_load(arg(1));
$id=$nd->field_ressourceid['und'][0]['value'];?>
<div style="display:none;" class="modal-data-api-help modal fade in">
<div class="modal-header">
  <a data-dismiss="modal" class="close">x</a>
  <h3>
    <?php echo t("CKAN Data API");?>
  </h3>
</div>
<div class="modal-body">
  <p><strong><?=t("Access resource data via a web API with powerful query support");?></strong>. <?=t("Further information in the");?>
  <a target="_blank" href="http://docs.ckan.org/en/latest/using-data-api.html"><?=t("main CKAN Data API and DataStore documentation");?></a>.</p>
  <div class="accordion-group">
    <div class="accordion-heading">
      <a href=".collapse-endpoints" data-toggle="collapse" class="accordion-toggle"><?=t("Endpoints");?> >></a>
    </div>
    <div class="collapse-endpoints in accordion-body collapse">
      <div class="accordion-inner">
        <p><?=t("The Data API builds directly on ElasticSearch, with a resource API endpoint being equivalent to a single index 'type' in ElasticSearch.");?>
        <?=t("This means you can directly re-use");?> <a _target="blank" href="http://www.elasticsearch.org/guide/appendix/clients.html">
		<?t("ElasticSearch client libraries");?></a> <?=t("when connecting to the API endpoint");?>.</p>
        <table class="table-condensed table-striped table-bordered">
          <thead></thead>
          <tbody>
            <tr>
              <th><?=t("Base");?></th>
              <td><code><?=variable_get('ckan_url');?>api/data/<?php echo $id;?></code></td>
            </tr>
            <tr>
              <th><?=t("Query");?></th>
              <td>
                <code><?=variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search</code>
              </td>
            </tr>
            <tr>
              <th><?=t("Query example");?></th>
              <td>
                <code><a target="_blank" href="<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?size=5&amp;pretty=true"><?=variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?size=5&amp;pretty=true</a></code>
              </td>
            </tr>
            <tr>
              <th><?=t("Schema (Mapping)");?></th>
              <td>
                <code><a target="_blank" href="<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_mapping"><?=variable_get('ckan_url');?>api/data/<?php echo $id;?>/_mapping?pretty=true</a></code>
              </td>
            </tr>
          </tbody>
        </table>
      </div>
    </div>
  </div>
  <div class="accordion-group">
    <div class="accordion-heading">
      <a data-toggle="collapse" href=".collapse-querying" class="accordion-toggle"><?=t("Querying");?>
       </a>
    </div>
    <div class="collapse-endpoints in accordion-body">
      <div class="accordion-inner">
        <strong><?=t("Query example (first 5 results)");?></strong>
        <p>
        <code><a target="_blank" href="<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?size=5&amp;pretty=true"><?=variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?size=5&amp;pretty=true</a></code>
        </p>
        <strong><?=t("Query example (results with 'jones' in> <code>title</code> field)");?></strong>
        <p>
        <code><a target="_blank" href="<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?q=title:jones&amp;size=5&amp;pretty=true"><?=variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?q=title:jones&amp;size=5&amp;pretty=true</a></code>
        </p>
        <strong><?=t("Schema (Mapping)");?></strong>
        <p>
        <code><a target="_blank" href="<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_mapping"><?=variable_get('ckan_url');?>api/data/<?php echo $id;?>/_mapping?pretty=true</a></code>
        </p>
        <strong><?=t("Endpoint (for clients)");?></strong>
        <p>
        <code><?=variable_get('ckan_url');?>api/data/<?php echo $id;?></code>
        </p>
      </div>
    </div>
  </div>
  <div class="accordion-group">
    <div class="accordion-heading">
      <a data-toggle="collapse" href=".collapse-javascript" class="accordion-toggle">Example: Javascript</a>
    </div>
    <div class="accordion-body collapse-javascript in">
      <div class="accordion-inner">
        <p><?=t("A simple ajax (JSONP) request to the data API using jQuery");?>.</p>
        <pre>var data = {
  size: 5 // get 5 results
  q: 'title:jones' // query on the title field for 'jones'
};
$.ajax({
  url: '<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search',
  data: data,
  dataType: 'jsonp',
  success: function(data) {
    alert('Total results found: ' + data.hits.total)
  }
});</pre>
      </div>
    </div>
  </div>
  <div class="accordion-group">
    <div class="accordion-heading">
      <a data-toggle="collapse" href=".collapse-javascript" class="accordion-toggle"><?=t("Example: Python");?></a>
    </div>
    <div class="accordion-body collapse-javascript in">
      <div class="accordion-inner">
        <pre>import urllib
url = '<?php echo variable_get('ckan_url');?>api/data/<?php echo $id;?>/_search?size=5&amp;q=title:jones'
fileobj = urllib.urlopen(url)
print fileobj.read()
</pre>
      </div>
    </div>
  </div>
</div>
</div>