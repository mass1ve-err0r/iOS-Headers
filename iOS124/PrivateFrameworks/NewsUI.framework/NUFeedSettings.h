//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITraitCollection;

@interface NUFeedSettings : NSObject
{
    UITraitCollection *_traitCollection;
    struct CGRect _bounds;
}

@property(readonly, copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (id)initWithBounds:(struct CGRect)arg1 traitCollection:(id)arg2;

@end

