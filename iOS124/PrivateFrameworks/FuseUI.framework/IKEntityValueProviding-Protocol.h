//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString, NSURL;

@protocol IKEntityValueProviding <NSObject>
- (NSDictionary *)valuesForEntityProperties:(NSSet *)arg1;
- (id)valueForEntityProperty:(NSString *)arg1;
- (NSURL *)imageURLForEntityArtworkProperty:(NSString *)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (NSDictionary *)entityUniqueIdentifier;

@optional
- (NSString *)stringValueWithNativeValue:(id)arg1 forProperty:(NSString *)arg2;
- (id)nativeValueForStringValue:(NSString *)arg1 forProperty:(NSString *)arg2;
@end

