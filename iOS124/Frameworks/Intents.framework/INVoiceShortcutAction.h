//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INIntent, NSUserActivity;

@interface INVoiceShortcutAction : NSObject <NSSecureCoding, NSCopying>
{
    INIntent *_intent;
    NSUserActivity *_userActivity;
}

+ (void)setVoiceShortcutSuggestions:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithIntent:(id)arg1;

@end

