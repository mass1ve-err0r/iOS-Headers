//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFSpeechRecognition;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>
{
    AFSpeechRecognition *_recognition;
    AFSpeechRecognition *_rawRecognition;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) AFSpeechRecognition *rawRecognition; // @synthesize rawRecognition=_rawRecognition;
@property(readonly, nonatomic) AFSpeechRecognition *recognition; // @synthesize recognition=_recognition;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

