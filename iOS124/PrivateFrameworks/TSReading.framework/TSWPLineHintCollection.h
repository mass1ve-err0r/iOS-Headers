//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@interface TSWPLineHintCollection : TSPObject
{
    CDStruct_cd85e889 *mHints;
    unsigned long long mHintsCount;
    _Bool mValid;
    _Bool mHasColumnIndices;
    TSWPLineHintCollection *mContainingCollection;
}

@property(readonly, nonatomic) _Bool hasColumnIndices; // @synthesize hasColumnIndices=mHasColumnIndices;
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=mValid;
@property(readonly, nonatomic) unsigned long long hintsCount; // @synthesize hintsCount=mHintsCount;
- (id)descriptionWithStorage:(id)arg1;
- (struct _NSRange)hintRangeForLineStartingAtHintIndex:(unsigned long long)arg1;
- (struct _NSRange)hintRangeForColumnIndex:(unsigned long long)arg1 frameBounds:(struct CGRect)arg2 charIndex:(unsigned long long)arg3;
- (unsigned long long)p_columnIndexForHintIndex:(unsigned long long)arg1;
- (id)newSubCollectionWithRange:(struct _NSRange)arg1;
- (_Bool)checkSubCollectionRange:(struct _NSRange)arg1;
- (id)initWithContainingCollection:(id)arg1 range:(struct _NSRange)arg2 context:(id)arg3;
@property(readonly, nonatomic) const CDStruct_cd85e889 *hints;
- (void)dealloc;

@end

