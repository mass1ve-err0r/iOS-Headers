//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTConditionalStyleSet;

__attribute__((visibility("hidden")))
@interface TSTTableDataConditionalStyleSet : TSTTableDataObject
{
    TSTConditionalStyleSet *_conditionalStyleSet;
}

@property(retain, nonatomic) TSTConditionalStyleSet *conditionalStyleSet; // @synthesize conditionalStyleSet=_conditionalStyleSet;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initObjectWithConditionalStyleSet:(id)arg1 refCount:(unsigned int)arg2;

@end

