<?php
/**
 * @file
 * article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('文章'),
      'base' => 'node_content',
      'description' => t('使用<em>文章</em>发布有关时间的内容，如消息，新闻或日志。'),
      'has_title' => '1',
      'title_label' => t('标题'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
