/** @type {LibApiTypedFn} */
const api_typed = (v) => v;

const api = api_typed({
  kqueue: {
    parameters: [],
    result: 'i32'
  },
  kevent: {
    parameters: ['i32', 'pointer', 'i32', 'pointer', 'i32', 'pointer'],
    pointers: [, 'const struct kevent *', , 'struct kevent *', , 'const struct timespec *'],
    result: 'i32'
  },
  kevent64: {
    parameters: ['i32', 'pointer', 'i32', 'pointer', 'i32', 'u32', 'pointer'],
    pointers: [, 'const struct kevent64_s *', , 'struct kevent64_s *', , , 'const struct timespec *'],
    result: 'i32'
  }
})

const name = 'kevents'

/** @type {LibConstsTypedFn} */
const constants_typed = (v) => v;

const constants = constants_typed({
  EVFILT_READ: 'i32',
  EVFILT_EXCEPT: 'i32',
  EVFILT_WRITE: 'i32',
  EVFILT_VNODE: 'i32',
  EVFILT_PROC: 'i32',
  EVFILT_SIGNAL: 'i32',
  EVFILT_MACHPORT: 'i32',
  EVFILT_TIMER: 'i32',
  EV_ADD: 'i32',
  EV_ENABLE: 'i32',
  EV_DISABLE: 'i32',
  EV_DELETE: 'i32',
  EV_RECEIPT: 'i32',
  EV_ONESHOT: 'i32',
  EV_CLEAR: 'i32',
  EV_EOF: 'i32',
  EV_OOBAND: 'i32',
  EV_ERROR: 'i32',
  KEVENT_FLAG_IMMEDIATE: 'i32'
})

const includes = [
  'sys/event.h', 'sys/types.h', 'sys/time.h'
]

const structs = /** @type {const} */ ([
  'kevent64_s', 'time_t', 'timespec'
])

export { name, api, constants, includes, structs }
