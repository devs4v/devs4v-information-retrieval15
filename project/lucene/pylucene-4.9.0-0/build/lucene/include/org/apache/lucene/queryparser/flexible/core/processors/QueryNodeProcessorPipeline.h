#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorPipeline_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
            namespace config {
              class QueryConfigHandler;
            }
            namespace processors {
              class QueryNodeProcessor;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class ListIterator;
    class List;
    class Iterator;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {

              class QueryNodeProcessorPipeline : public ::java::lang::Object {
              public:
                enum {
                  mid_init$_54c6a166,
                  mid_init$_0b1f7132,
                  mid_add_507a7d19,
                  mid_add_f6ca4173,
                  mid_addAll_9bfb3701,
                  mid_addAll_006cd2b7,
                  mid_clear_54c6a166,
                  mid_contains_290588e2,
                  mid_containsAll_9bfb3701,
                  mid_get_b9090432,
                  mid_getQueryConfigHandler_3636d8c3,
                  mid_indexOf_290588f1,
                  mid_isEmpty_54c6a16a,
                  mid_iterator_40858c90,
                  mid_lastIndexOf_290588f1,
                  mid_listIterator_b5be4e14,
                  mid_listIterator_4145ee6a,
                  mid_process_6705aed7,
                  mid_remove_b9090432,
                  mid_remove_290588e2,
                  mid_removeAll_9bfb3701,
                  mid_retainAll_9bfb3701,
                  mid_set_adfc5df1,
                  mid_setQueryConfigHandler_0b1f7132,
                  mid_size_54c6a179,
                  mid_subList_6bc635fe,
                  mid_toArray_94e49c77,
                  mid_toArray_ae67dbcf,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessorPipeline(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorPipeline(const QueryNodeProcessorPipeline& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorPipeline();
                QueryNodeProcessorPipeline(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                jboolean add(const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void add(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                jboolean addAll(const ::java::util::Collection &) const;
                jboolean addAll(jint, const ::java::util::Collection &) const;
                void clear() const;
                jboolean contains(const ::java::lang::Object &) const;
                jboolean containsAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor get(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                jint indexOf(const ::java::lang::Object &) const;
                jboolean isEmpty() const;
                ::java::util::Iterator iterator() const;
                jint lastIndexOf(const ::java::lang::Object &) const;
                ::java::util::ListIterator listIterator() const;
                ::java::util::ListIterator listIterator(jint) const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor remove(jint) const;
                jboolean remove(const ::java::lang::Object &) const;
                jboolean removeAll(const ::java::util::Collection &) const;
                jboolean retainAll(const ::java::util::Collection &) const;
                ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor set(jint, const ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessor &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
                jint size() const;
                ::java::util::List subList(jint, jint) const;
                JArray< ::java::lang::Object > toArray() const;
                JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {
              extern PyTypeObject PY_TYPE(QueryNodeProcessorPipeline);

              class t_QueryNodeProcessorPipeline {
              public:
                PyObject_HEAD
                QueryNodeProcessorPipeline object;
                static PyObject *wrap_Object(const QueryNodeProcessorPipeline&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
