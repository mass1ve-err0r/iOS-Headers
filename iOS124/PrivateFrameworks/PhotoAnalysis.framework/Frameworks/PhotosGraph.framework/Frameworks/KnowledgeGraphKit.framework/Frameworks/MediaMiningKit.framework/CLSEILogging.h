//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface CLSEILogging : NSObject
{
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)sharedLogging;
@property(readonly) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (void).cxx_destruct;

@end

