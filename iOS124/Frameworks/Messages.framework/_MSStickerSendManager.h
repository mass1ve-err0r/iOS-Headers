//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/_MSStickerSendManagerDelegate-Protocol.h>

@class NSString;
@protocol _MSStickerSendManagerDelegate;

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate>
{
    id <_MSStickerSendManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <_MSStickerSendManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

