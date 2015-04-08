#ifndef org_apache_lucene_search_suggest_jaspell_JaspellTernarySearchTrie_H
#define org_apache_lucene_search_suggest_jaspell_JaspellTernarySearchTrie_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace util {
    class Locale;
    class List;
  }
  namespace lang {
    class CharSequence;
    class Float;
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace jaspell {

            class JaspellTernarySearchTrie : public ::java::lang::Object {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_c3dacf57,
                mid_init$_56b0e4b3,
                mid_init$_9e00f624,
                mid_get_a739ccff,
                mid_getAndIncrement_b837041d,
                mid_matchAlmost_0feb8f08,
                mid_matchAlmost_560b361c,
                mid_matchPrefix_0feb8f08,
                mid_matchPrefix_560b361c,
                mid_numDataNodes_54c6a179,
                mid_numNodes_54c6a179,
                mid_put_cb8bea9a,
                mid_ramBytesUsed_54c6a17a,
                mid_remove_5fdc3f48,
                mid_setMatchAlmostDiff_39c7bd3c,
                mid_setNumReturnValues_39c7bd3c,
                mid_getKey_67caf3f3,
                mid_getNode_627fe0cf,
                mid_getOrCreateNode_8f2fe50d,
                mid_numDataNodes_8b97b83b,
                mid_numNodes_8b97b83b,
                mid_sortKeys_4e6ea08e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JaspellTernarySearchTrie(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              JaspellTernarySearchTrie(const JaspellTernarySearchTrie& obj) : ::java::lang::Object(obj) {}

              JaspellTernarySearchTrie();
              JaspellTernarySearchTrie(const ::java::io::File &);
              JaspellTernarySearchTrie(const ::java::util::Locale &);
              JaspellTernarySearchTrie(const ::java::io::File &, jboolean);

              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::lang::Float getAndIncrement(const ::java::lang::String &) const;
              ::java::util::List matchAlmost(const ::java::lang::String &) const;
              ::java::util::List matchAlmost(const ::java::lang::CharSequence &, jint) const;
              ::java::util::List matchPrefix(const ::java::lang::String &) const;
              ::java::util::List matchPrefix(const ::java::lang::CharSequence &, jint) const;
              jint numDataNodes() const;
              jint numNodes() const;
              void put(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
              jlong ramBytesUsed() const;
              void remove(const ::java::lang::String &) const;
              void setMatchAlmostDiff(jint) const;
              void setNumReturnValues(jint) const;
            };
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
      namespace search {
        namespace suggest {
          namespace jaspell {
            extern PyTypeObject PY_TYPE(JaspellTernarySearchTrie);

            class t_JaspellTernarySearchTrie {
            public:
              PyObject_HEAD
              JaspellTernarySearchTrie object;
              static PyObject *wrap_Object(const JaspellTernarySearchTrie&);
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

#endif
