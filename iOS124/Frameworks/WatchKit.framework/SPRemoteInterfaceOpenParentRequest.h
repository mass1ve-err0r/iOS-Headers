//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SPRemoteInterfaceOpenParentRequest : NSObject
{
    _Bool _waitingForReply;
    NSData *_userInfoData;
    CDUnknownBlockType _reply;
}

@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(copy, nonatomic) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(nonatomic) _Bool waitingForReply; // @synthesize waitingForReply=_waitingForReply;
- (void).cxx_destruct;

@end

