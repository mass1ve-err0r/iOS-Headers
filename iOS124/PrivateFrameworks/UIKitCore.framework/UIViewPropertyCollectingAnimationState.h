//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewInProcessAnimationState.h>

@class _UICompoundObjectMap;

__attribute__((visibility("hidden")))
@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState
{
    _UICompoundObjectMap *_capturedProperties;
}

@property(retain, nonatomic) _UICompoundObjectMap *capturedProperties; // @synthesize capturedProperties=_capturedProperties;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)init;

@end

