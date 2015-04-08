#ifndef org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource$ScoreValueSource_H
#define org_apache_lucene_facet_taxonomy_TaxonomyFacetSumValueSource$ScoreValueSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class AtomicReaderContext;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Object;
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
      namespace facet {
        namespace taxonomy {

          class TaxonomyFacetSumValueSource$ScoreValueSource : public ::org::apache::lucene::queries::function::ValueSource {
          public:
            enum {
              mid_init$_54c6a166,
              mid_description_14c7b5c5,
              mid_equals_290588e2,
              mid_getValues_4c566485,
              mid_hashCode_54c6a179,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyFacetSumValueSource$ScoreValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
              if (obj != NULL)
                env->getClass(initializeClass);
            }
            TaxonomyFacetSumValueSource$ScoreValueSource(const TaxonomyFacetSumValueSource$ScoreValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

            TaxonomyFacetSumValueSource$ScoreValueSource();

            ::java::lang::String description() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::AtomicReaderContext &) const;
            jint hashCode() const;
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
      namespace facet {
        namespace taxonomy {
          extern PyTypeObject PY_TYPE(TaxonomyFacetSumValueSource$ScoreValueSource);

          class t_TaxonomyFacetSumValueSource$ScoreValueSource {
          public:
            PyObject_HEAD
            TaxonomyFacetSumValueSource$ScoreValueSource object;
            static PyObject *wrap_Object(const TaxonomyFacetSumValueSource$ScoreValueSource&);
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
