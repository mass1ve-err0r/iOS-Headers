//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKGridArrangementItem-Protocol.h>

@class NSString, NUISizeCache;

@interface TLKImageItem : NSObject <TLKGridArrangementItem>
{
    unsigned long long row;
    double horizontalHuggingPriority;
    double horizontalCompressionResistance;
    NUISizeCache *sizeCache;
    struct _NSRange columnRange;
    struct CGSize _size;
    struct CGRect frame;
}

@property struct CGSize size; // @synthesize size=_size;
@property(retain) NUISizeCache *sizeCache; // @synthesize sizeCache;
@property double horizontalCompressionResistance; // @synthesize horizontalCompressionResistance;
@property double horizontalHuggingPriority; // @synthesize horizontalHuggingPriority;
@property unsigned long long row; // @synthesize row;
@property struct _NSRange columnRange; // @synthesize columnRange;
@property struct CGRect frame;
- (void).cxx_destruct;
- (struct CGSize)sizeForTargetSize:(struct CGSize)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

