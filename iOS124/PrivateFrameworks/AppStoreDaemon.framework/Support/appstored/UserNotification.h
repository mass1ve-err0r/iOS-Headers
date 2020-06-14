//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface UserNotification : NSObject
{
    CDUnknownBlockType _completionBlock;
    _Bool _isCanceled;
    NSDictionary *_notificationDictionary;
    unsigned long long _notificationOptions;
    struct __CFUserNotification *_userNotification;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled; // @synthesize canceled=_isCanceled;
- (void).cxx_destruct;
- (unsigned long long)waitForResponse;
@property(readonly, nonatomic) struct __CFUserNotification *userNotification;
- (void)updateWithDictionary:(id)arg1 options:(unsigned long long)arg2;
- (void)show;
- (void)cancel;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

