#ifndef org_apache_lucene_search_grouping_GroupingSearch_H
#define org_apache_lucene_search_grouping_GroupingSearch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class Sort;
        class Query;
        class IndexSearcher;
        class Filter;
        namespace grouping {
          class TopGroups;
        }
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupingSearch : public ::java::lang::Object {
          public:
            enum {
              mid_init$_9bb37152,
              mid_init$_5fdc3f48,
              mid_init$_9d3ebac8,
              mid_disableCaching_bd44cd2b,
              mid_getAllGroupHeads_03c2457d,
              mid_getAllMatchingGroups_2d2d7de4,
              mid_search_cc5c11db,
              mid_search_2bb63d27,
              mid_setAllGroupHeads_b6dc0458,
              mid_setAllGroups_b6dc0458,
              mid_setCaching_8d110dba,
              mid_setCachingInMB_c48a1ff7,
              mid_setFillSortFields_b6dc0458,
              mid_setGroupDocsLimit_2cfcb8b1,
              mid_setGroupDocsOffset_2cfcb8b1,
              mid_setGroupSort_a0e5bdf3,
              mid_setIncludeMaxScore_b6dc0458,
              mid_setIncludeScores_b6dc0458,
              mid_setInitialSize_2cfcb8b1,
              mid_setSortWithinGroup_a0e5bdf3,
              mid_groupByFieldOrFunction_2bb63d27,
              mid_groupByDocBlock_2bb63d27,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupingSearch(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            GroupingSearch(const GroupingSearch& obj) : ::java::lang::Object(obj) {}

            GroupingSearch(const ::org::apache::lucene::search::Filter &);
            GroupingSearch(const ::java::lang::String &);
            GroupingSearch(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

            GroupingSearch disableCaching() const;
            ::org::apache::lucene::util::Bits getAllGroupHeads() const;
            ::java::util::Collection getAllMatchingGroups() const;
            ::org::apache::lucene::search::grouping::TopGroups search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, jint) const;
            ::org::apache::lucene::search::grouping::TopGroups search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Filter &, const ::org::apache::lucene::search::Query &, jint, jint) const;
            GroupingSearch setAllGroupHeads(jboolean) const;
            GroupingSearch setAllGroups(jboolean) const;
            GroupingSearch setCaching(jint, jboolean) const;
            GroupingSearch setCachingInMB(jdouble, jboolean) const;
            GroupingSearch setFillSortFields(jboolean) const;
            GroupingSearch setGroupDocsLimit(jint) const;
            GroupingSearch setGroupDocsOffset(jint) const;
            GroupingSearch setGroupSort(const ::org::apache::lucene::search::Sort &) const;
            GroupingSearch setIncludeMaxScore(jboolean) const;
            GroupingSearch setIncludeScores(jboolean) const;
            GroupingSearch setInitialSize(jint) const;
            GroupingSearch setSortWithinGroup(const ::org::apache::lucene::search::Sort &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          extern PyTypeObject PY_TYPE(GroupingSearch);

          class t_GroupingSearch {
          public:
            PyObject_HEAD
            GroupingSearch object;
            static PyObject *wrap_Object(const GroupingSearch&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
