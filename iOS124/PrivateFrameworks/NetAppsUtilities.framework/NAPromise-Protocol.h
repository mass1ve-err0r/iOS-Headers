//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/NSObject-Protocol.h>

@class NSError;

@protocol NAPromise <NSObject>
- (void (^)(NSError *))errorOnlyCompletionHandlerAdapter;
- (void (^)(id, NSError *))completionHandlerAdapter;
- (_Bool)finishWithNoResult;
- (_Bool)finishWithResult:(id)arg1 error:(NSError *)arg2;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithError:(NSError *)arg1;
@end

