//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACalDAV/NSObject-Protocol.h>

@class CoreDAVTaskGroup, NSError;

@protocol CoreDAVTaskGroupDelegate <NSObject>

@optional
- (void)taskGroup:(CoreDAVTaskGroup *)arg1 didFinishWithError:(NSError *)arg2;
@end

