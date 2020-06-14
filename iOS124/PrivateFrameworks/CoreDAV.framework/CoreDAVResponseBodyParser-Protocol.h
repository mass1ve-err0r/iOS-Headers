//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVTask, NSData, NSError, NSString;

@protocol CoreDAVResponseBodyParser <NSObject>
@property(readonly) NSError *parserError;
- (_Bool)processData:(NSData *)arg1 forTask:(CoreDAVTask *)arg2;

@optional
+ (_Bool)canHandleContentType:(NSString *)arg1;
@end

