<?php
/**
 * @file
 * article.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function article_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'youku_player';
  $formatter->label = 'Youku Player';
  $formatter->description = '优酷视频播放器';
  $formatter->mode = 'php';
  $formatter->field_types = 'link_field';
  $formatter->code = '$element = array();
foreach ($variables[\'#items\'] as $delta => $item) {
  $element[$delta] = array(
    \'#type\' => \'markup\',
    \'#markup\' => \'<embed src="\'. $item[\'url\'] .\'" allowFullScreen="true" quality="high" width="640" height="400" align="middle" allowScriptAccess="always" type="application/x-shockwave-flash"></embed>\',
  );
}
return $element;';
  $formatter->fapi = '';
  $export['youku_player'] = $formatter;

  return $export;
}
