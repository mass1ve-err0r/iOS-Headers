//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDKnob.h>

@class TSUImage;

@interface TSDButtonKnob : TSDKnob
{
    TSUImage *mImage;
    _Bool mEnabled;
    _Bool mHighlighted;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=mHighlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=mEnabled;
@property(retain, nonatomic) TSUImage *image; // @synthesize image=mImage;
- (void)p_updateLayerImage;
- (id)knobImage;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (void)dealloc;
- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (id)initWithImage:(id)arg1 tag:(unsigned long long)arg2 onRep:(id)arg3;

@end

