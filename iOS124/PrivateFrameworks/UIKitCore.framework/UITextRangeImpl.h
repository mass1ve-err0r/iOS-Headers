//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextRange.h>

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange
{
    DOMRange *_domRange;
    long long _affinityIfCollapsed;
}

+ (id)wrapDOMRange:(id)arg1;
+ (id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2;
@property(nonatomic) long long affinity; // @synthesize affinity=_affinityIfCollapsed;
@property(retain, nonatomic) DOMRange *domRange; // @synthesize domRange=_domRange;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEmpty;
- (id)end;
- (id)start;
- (void)adjustAffinityOfPosition:(id)arg1 isStart:(_Bool)arg2;
- (void)dealloc;
- (id)description;

@end

