//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionJavaScript : SCNAction
{
    NSString *_script;
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (id)parameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCustom;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end
