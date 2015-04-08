#ifndef org_apache_lucene_analysis_compound_hyphenation_PatternParser_H
#define org_apache_lucene_analysis_compound_hyphenation_PatternParser_H

#include "org/xml/sax/helpers/DefaultHandler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class PatternConsumer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class PatternParser : public ::org::xml::sax::helpers::DefaultHandler {
            public:
              enum {
                mid_init$_54c6a166,
                mid_init$_f6e11b3c,
                mid_characters_6f0bb356,
                mid_endElement_9c119564,
                mid_parse_5fdc3f48,
                mid_parse_c3dacf57,
                mid_setConsumer_f6e11b3c,
                mid_getPattern_97a5258f,
                mid_readToken_7614059b,
                mid_normalizeException_27b9ce2f,
                mid_getExceptionWord_0c7b6c64,
                mid_getInterletterValues_97a5258f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PatternParser(jobject obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {
                if (obj != NULL)
                  env->getClass(initializeClass);
              }
              PatternParser(const PatternParser& obj) : ::org::xml::sax::helpers::DefaultHandler(obj) {}

              PatternParser();
              PatternParser(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &);

              void characters(const JArray< jchar > &, jint, jint) const;
              void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
              void parse(const ::java::lang::String &) const;
              void parse(const ::java::io::File &) const;
              void setConsumer(const ::org::apache::lucene::analysis::compound::hyphenation::PatternConsumer &) const;
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
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyTypeObject PY_TYPE(PatternParser);

            class t_PatternParser {
            public:
              PyObject_HEAD
              PatternParser object;
              static PyObject *wrap_Object(const PatternParser&);
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
