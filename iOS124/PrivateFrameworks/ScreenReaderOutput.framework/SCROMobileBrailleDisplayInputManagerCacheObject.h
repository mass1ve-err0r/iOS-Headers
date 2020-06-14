//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject
{
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    int _brailleInputMode;
    NSMutableDictionary *_commandDictionary;
    NSMutableArray *_orderedIdentifiers;
    NSBundle *_bundle;
}

@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSMutableArray *orderedIdentifiers; // @synthesize orderedIdentifiers=_orderedIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *commandDictionary; // @synthesize commandDictionary=_commandDictionary;
@property(retain, nonatomic) NSString *driverIdentifier; // @synthesize driverIdentifier=_driverIdentifier;
@property(nonatomic) int brailleInputMode; // @synthesize brailleInputMode=_brailleInputMode;
@property(retain, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (void).cxx_destruct;

@end

