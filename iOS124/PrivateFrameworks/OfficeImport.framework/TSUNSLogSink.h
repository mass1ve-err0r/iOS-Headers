//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUNSLogSink : NSObject
{
    int _logLevel;
}

+ (id)sharedInstance;
@property int logLevel; // @synthesize logLevel=_logLevel;
- (CDUnknownBlockType)logSinkBlock;
- (id)init;

@end

