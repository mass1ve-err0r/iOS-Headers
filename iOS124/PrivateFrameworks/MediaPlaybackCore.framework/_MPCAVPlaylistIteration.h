//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class MPSparseArray;

@interface _MPCAVPlaylistIteration : NSObject <NSSecureCoding>
{
    MPSparseArray *_sourceContexts;
    unsigned long long _iterationIndex;
    unsigned long long _count;
    unsigned long long _indexToFaultIn;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long indexToFaultIn; // @synthesize indexToFaultIn=_indexToFaultIn;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long iterationIndex; // @synthesize iterationIndex=_iterationIndex;
@property(retain, nonatomic) MPSparseArray *sourceContexts; // @synthesize sourceContexts=_sourceContexts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

