//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject
{
    MSAlertManager *_owner;
    NSString *_personID;
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_runLoopSource;
    CDUnknownBlockType _completionBlock;
}

+ (id)info;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) __weak MSAlertManager *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) struct __CFUserNotification *userNotification;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource;

@end

