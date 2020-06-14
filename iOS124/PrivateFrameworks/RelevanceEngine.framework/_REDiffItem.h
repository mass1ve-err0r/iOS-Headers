//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _REDiffItem : NSObject
{
    id _object;
    unsigned long long _index;
    CDUnknownBlockType _comparator;
    CDUnknownBlockType _hashGenerator;
}

+ (id)itemWithObject:(id)arg1 index:(unsigned long long)arg2 comparator:(CDUnknownBlockType)arg3 hashGenerator:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) CDUnknownBlockType hashGenerator; // @synthesize hashGenerator=_hashGenerator;
@property(readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

