# Notes on Logging

> [HOME](../../README.md)

Currently, using easyloggingpp but plan to either switch loggers or make my own logger.

## From EasyLogging README

|   Level  |                 Description                                                                                                                                   |
|----------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Global   | Generic level that represents all levels. Useful when setting global configuration for all levels.                                                            |
| Trace    | Information that can be useful to back-trace certain events - mostly useful than debug logs.                                                                  |
| Debug    | Informational events most useful for developers to debug application. Only applicable if NDEBUG is not defined (for non-VC++) or _DEBUG is defined (for VC++).|
| Fatal    | Very severe error event that will presumably lead the application to abort.                                                                                   |
| Error    | Error information but will continue application to keep running.                                                                                              |
| Warning  | Information representing errors in application but application will keep running.                                                                             |
| Info     | Mainly useful to represent current progress of application.                                                                                                   |
| Verbose  | Information that can be highly useful and vary with verbose logging level. Verbose logging is not applicable to hierarchical logging.                         |
| Unknown  | Only applicable to hierarchical logging and is used to turn off logging completely.                                                                           |

## easyloggingpp notes
- Info messages `LOG(INFO)`
- Warring messages `LOG(WARNING)`

Also default setup auto save the logs into `myeasylog.log` file (appended)