//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DRFlockAnimatable;

@interface DRFlockBadgeLayout : NSObject
{
    _Bool _visible;
    _Bool _justBecameVisible;
    DRFlockAnimatable *_position;
    DRFlockAnimatable *_offset;
    DRFlockAnimatable *_size;
    DRFlockAnimatable *_alpha;
    DRFlockAnimatable *_offsetAdjustment;
}

@property(nonatomic) _Bool justBecameVisible; // @synthesize justBecameVisible=_justBecameVisible;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) DRFlockAnimatable *offsetAdjustment; // @synthesize offsetAdjustment=_offsetAdjustment;
@property(retain, nonatomic) DRFlockAnimatable *alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) DRFlockAnimatable *size; // @synthesize size=_size;
@property(retain, nonatomic) DRFlockAnimatable *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) DRFlockAnimatable *position; // @synthesize position=_position;
- (void).cxx_destruct;

@end

