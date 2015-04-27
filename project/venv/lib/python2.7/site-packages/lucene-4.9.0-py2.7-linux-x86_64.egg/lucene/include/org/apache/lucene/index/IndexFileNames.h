#ifndef org_apache_lucene_index_IndexFileNames_H
#define org_apache_lucene_index_IndexFileNames_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexFileNames : public ::java::lang::Object {
        public:
          enum {
            mid_fileNameFromGeneration_7a384922,
            mid_getExtension_97a5258f,
            mid_matchesExtension_4a26474e,
            mid_parseSegmentName_97a5258f,
            mid_segmentFileName_af6d27e3,
            mid_stripExtension_97a5258f,
            mid_stripSegmentName_97a5258f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFileNames(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL)
              env->getClass(initializeClass);
          }
          IndexFileNames(const IndexFileNames& obj) : ::java::lang::Object(obj) {}

          static ::java::util::regex::Pattern *CODEC_FILE_PATTERN;
          static ::java::lang::String *COMPOUND_FILE_ENTRIES_EXTENSION;
          static ::java::lang::String *COMPOUND_FILE_EXTENSION;
          static ::java::lang::String *GEN_EXTENSION;
          static JArray< ::java::lang::String > *INDEX_EXTENSIONS;
          static ::java::lang::String *SEGMENTS;
          static ::java::lang::String *SEGMENTS_GEN;

          static ::java::lang::String fileNameFromGeneration(const ::java::lang::String &, const ::java::lang::String &, jlong);
          static ::java::lang::String getExtension(const ::java::lang::String &);
          static jboolean matchesExtension(const ::java::lang::String &, const ::java::lang::String &);
          static ::java::lang::String parseSegmentName(const ::java::lang::String &);
          static ::java::lang::String segmentFileName(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
          static ::java::lang::String stripExtension(const ::java::lang::String &);
          static ::java::lang::String stripSegmentName(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyTypeObject PY_TYPE(IndexFileNames);

        class t_IndexFileNames {
        public:
          PyObject_HEAD
          IndexFileNames object;
          static PyObject *wrap_Object(const IndexFileNames&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
