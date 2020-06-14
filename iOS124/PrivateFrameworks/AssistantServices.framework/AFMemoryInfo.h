//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _virtualMemorySizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long physicalMemoryFootprintInBytes; // @synthesize physicalMemoryFootprintInBytes=_physicalMemoryFootprintInBytes;
@property(readonly, nonatomic) unsigned long long peakResidentMemorySizeInBytes; // @synthesize peakResidentMemorySizeInBytes=_peakResidentMemorySizeInBytes;
@property(readonly, nonatomic) unsigned long long residentMemorySizeInBytes; // @synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes;
@property(readonly, nonatomic) int pageSizeInBytes; // @synthesize pageSizeInBytes=_pageSizeInBytes;
@property(readonly, nonatomic) int numberOfRegions; // @synthesize numberOfRegions=_numberOfRegions;
@property(readonly, nonatomic) unsigned long long virtualMemorySizeInBytes; // @synthesize virtualMemorySizeInBytes=_virtualMemorySizeInBytes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

