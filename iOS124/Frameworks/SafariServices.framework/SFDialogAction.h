//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFDialogAction : NSObject
{
    long long _activatingKeyboardShortcut;
    long long _actionType;
    NSString *_title;
}

+ (id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(readonly, nonatomic) long long activatingKeyboardShortcut; // @synthesize activatingKeyboardShortcut=_activatingKeyboardShortcut;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;

@end

