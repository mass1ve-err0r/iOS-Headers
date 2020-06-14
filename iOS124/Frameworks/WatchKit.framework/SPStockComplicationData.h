//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchKit/SPComplicationData.h>

#import <WatchKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding>
{
    NSString *_tickerSymbolText;
    NSString *_priceText;
    NSString *_marketCapText;
    NSString *_changeInPercentText;
    NSString *_changeInPointsText;
    NSString *_changeText;
    unsigned long long _changeDirection;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long changeDirection; // @synthesize changeDirection=_changeDirection;
@property(retain, nonatomic) NSString *changeText; // @synthesize changeText=_changeText;
@property(retain, nonatomic) NSString *changeInPointsText; // @synthesize changeInPointsText=_changeInPointsText;
@property(retain, nonatomic) NSString *changeInPercentText; // @synthesize changeInPercentText=_changeInPercentText;
@property(retain, nonatomic) NSString *marketCapText; // @synthesize marketCapText=_marketCapText;
@property(retain, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(retain, nonatomic) NSString *tickerSymbolText; // @synthesize tickerSymbolText=_tickerSymbolText;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

