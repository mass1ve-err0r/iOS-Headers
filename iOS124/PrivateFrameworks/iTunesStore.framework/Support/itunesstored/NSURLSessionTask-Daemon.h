//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionTask.h>

@interface NSURLSessionTask (Daemon)
- (void)setITunesStoreDataConsumer:(id)arg1;
- (id)ITunesStoreDataConsumer;
- (long long)ITunesStoreCancelReason;
- (id)ITunesStoreCancelError;
- (void)cancelWithITunesStoreReason:(long long)arg1 error:(id)arg2;
@end

