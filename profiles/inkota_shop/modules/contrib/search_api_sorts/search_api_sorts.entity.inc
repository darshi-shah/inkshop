<?php

/**
 * Class representing a search sort.
 */
class SearchApiSort extends Entity {

  /* Database values that will be set when object is loaded: */

  /**
   * @var integer
   */
  public $id = 0;

  /**
   * @var string
   */
  public $index_id = '';

  /**
   * @var string
   */
  public $field = '';

  /**
   * @var string
   */
  public $name = '';

  /**
   * @var integer
   */
  public $enabled = 0;

  /**
   * @var integer
   */
  public $weight = 0;

  /**
   * Constructor as a helper to the parent constructor.
   */
  public function __construct(array $values = array()) {
    parent::__construct($values, 'search_api_sort');
  }

}
