//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface VMUCallTreeLeafNode : VMUCallTreeNode
{
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (void).cxx_destruct;
- (void)getBrowserName:(id)arg1;
- (void)addAddress:(unsigned long long)arg1;
- (id)init;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end

