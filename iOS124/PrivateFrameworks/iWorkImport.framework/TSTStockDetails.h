//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTStockDetails : NSObject
{
    NSString *_symbol;
    long long _attribute;
}

+ (id)detailsWithSymbol:(id)arg1 attribute:(long long)arg2;
@property(nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (_Bool)isEqualToStockDetails:(id)arg1;
- (id)initWithSymbol:(id)arg1 attribute:(long long)arg2;

@end

