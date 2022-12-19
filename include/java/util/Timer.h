// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Timer__
#define __java_util_Timer__

#pragma interface

#include <java/lang/Object.h>

class java::util::Timer : public ::java::lang::Object
{
public:
  Timer ();
  Timer (jboolean);
private:
  Timer (jboolean, jint);
  Timer (jboolean, jint, ::java::lang::String *);
public:
  virtual void cancel ();
private:
  void schedule (::java::util::TimerTask *, jlong, jlong, jboolean);
  static void positiveDelay (jlong);
  static void positivePeriod (jlong);
public:
  virtual void schedule (::java::util::TimerTask *, ::java::util::Date *);
  virtual void schedule (::java::util::TimerTask *, ::java::util::Date *, jlong);
  virtual void schedule (::java::util::TimerTask *, jlong);
  virtual void schedule (::java::util::TimerTask *, jlong, jlong);
  virtual void scheduleAtFixedRate (::java::util::TimerTask *, ::java::util::Date *, jlong);
  virtual void scheduleAtFixedRate (::java::util::TimerTask *, jlong, jlong);
public:  // actually protected
  virtual void finalize ();
private:
  static jint nr;
  ::java::util::Timer$TaskQueue * __attribute__((aligned(__alignof__( ::java::lang::Object )))) queue;
  ::java::util::Timer$Scheduler *scheduler;
  ::java::lang::Thread *thread;
  jboolean canceled;

  friend class java_util_Timer$Scheduler;
  friend class java_util_Timer$TaskQueue;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_util_Timer__ */
