//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookmarkDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVDeleteTask, NSError;

@protocol CoreDAVDeleteTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)deleteTask:(CoreDAVDeleteTask *)arg1 completedWithError:(NSError *)arg2;
@end

