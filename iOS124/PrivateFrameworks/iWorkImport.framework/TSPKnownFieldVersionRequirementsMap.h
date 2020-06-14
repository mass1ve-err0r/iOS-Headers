//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPKnownFieldVersionRequirementsMap : NSObject
{
    struct auto_ptr<std::__1::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements>>>> _map;
}

+ (unordered_map_caa2f3b1 *)updateMap:(unordered_map_caa2f3b1 *)arg1 message:(const struct Message *)arg2 byAddingRulesFromKnownFieldRuleProvider:(id)arg3;
+ (id)newKnownFieldVersionRequirementsMapForMessage:(const struct Message *)arg1 knownFieldRuleProvider:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)addRulesFromKnownFieldRuleProvider:(id)arg1;
- (id)initWithMap:(unordered_map_caa2f3b1 *)arg1;
- (id)init;

@end

