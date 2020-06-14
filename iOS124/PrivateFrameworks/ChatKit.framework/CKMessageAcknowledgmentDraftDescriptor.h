//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKMessageAcknowledgment-Protocol.h>

@class NSString, UIColor;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment>
{
    long long _messageAcknowledgmentType;
}

+ (id)allMessageAcknowledgmentDescriptors;
+ (id)acknowledgmentBarColor;
@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
@property(readonly, nonatomic) UIColor *selectedBalloonColor;
@property(readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property(readonly, nonatomic) UIColor *acknowledgmentImageColor;
- (long long)themeColor;
@property(readonly, nonatomic) NSString *acknowledgmentImageName;
- (id)initWithMessageAcknowledgmentType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

