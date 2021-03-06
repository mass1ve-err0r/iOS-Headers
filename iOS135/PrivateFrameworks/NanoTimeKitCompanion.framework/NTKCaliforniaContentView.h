/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCaliforniaContentView : UIView {
    CALayer * _circularHourTicks;
    CALayer * _circularMinuteTicks;
    bool  _circularPillMarkersCenterPointsCalculated;
    bool  _circularTicksHidden;
    CALayer * _circularTicksMulticolor;
    unsigned long long  _color;
    NTKCaliforniaColorPalette * _colorPalette;
    CLKDevice * _device;
    unsigned long long  _dial;
    CALayer * _fullscreenTicksMulticolor;
    NSArray * _hourMarkers;
    CALayer * _hourTicks;
    CALayer * _minuteTicks;
    bool  _showingStatusIcon;
    unsigned long long  _style;
    NTKCaliforniaStyleTransitionHandler * _styleTransitionHandler;
    NSArray * _temporaryHourMarkers;
    unsigned long long  _temporaryHourMarkersDial;
    unsigned long long  _temporaryHourMarkersStyle;
}

@property (nonatomic, retain) CALayer *circularHourTicks;
@property (nonatomic, retain) CALayer *circularMinuteTicks;
@property (nonatomic) bool circularPillMarkersCenterPointsCalculated;
@property (nonatomic) bool circularTicksHidden;
@property (nonatomic, retain) CALayer *circularTicksMulticolor;
@property (nonatomic) unsigned long long color;
@property (nonatomic, retain) NTKCaliforniaColorPalette *colorPalette;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) unsigned long long dial;
@property (nonatomic, retain) CALayer *fullscreenTicksMulticolor;
@property (nonatomic, retain) NSArray *hourMarkers;
@property (nonatomic, retain) CALayer *hourTicks;
@property (nonatomic, retain) CALayer *minuteTicks;
@property (nonatomic) bool showingStatusIcon;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) NTKCaliforniaStyleTransitionHandler *styleTransitionHandler;
@property (nonatomic, retain) NSArray *temporaryHourMarkers;
@property (nonatomic) unsigned long long temporaryHourMarkersDial;
@property (nonatomic) unsigned long long temporaryHourMarkersStyle;

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (void)_createDigitsIfNeededWithStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)_createLayer;
- (id)_createLayersWithCount:(unsigned long long)arg1;
- (void)_createTemporaryDigitsIfNeededWithStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)_digitLayersForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (void)_layoutHourMarkersLayers:(id)arg1 style:(unsigned long long)arg2 dialShape:(unsigned long long)arg3;
- (id)_setupTickLayerForColor:(id)arg1;
- (void)addCircularTicksIfNeeded:(id)arg1;
- (void)addFullscreenTicksIfNeeded:(id)arg1;
- (id)allTicksForStatus:(bool)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)circularHourTicks;
- (id)circularMinuteTicks;
- (struct CGPoint { double x1; double x2; }*)circularPillMarkersCenterPoints;
- (bool)circularPillMarkersCenterPointsCalculated;
- (bool)circularTicksHidden;
- (id)circularTicksMulticolor;
- (unsigned long long)color;
- (id)colorPalette;
- (void)configureTicksForStatus:(bool)arg1;
- (id)createCaliforniaGraphicAtIndex:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createLabelForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createPillAtIndex:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)createPillViewWithAngle:(double)arg1 size:(const struct CGSize { double x1; double x2; }*)arg2;
- (id)device;
- (unsigned long long)dial;
- (id)fullscreenTicksMulticolor;
- (id)hourMarkers;
- (struct CGPoint { double x1; double x2; }*)hourMarkersCenterPointConstantsForStyle:(unsigned long long)arg1 dial:(unsigned long long)arg2;
- (id)hourTicks;
- (id)hourTicksForStatus:(bool)arg1;
- (id)imageNameComponentForDial:(unsigned long long)arg1;
- (id)imageNameComponentForStyle:(unsigned long long)arg1;
- (id)imageNameForDigit:(unsigned long long)arg1 style:(unsigned long long)arg2 dial:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dial:(unsigned long long)arg2 style:(unsigned long long)arg3 color:(unsigned long long)arg4 device:(id)arg5;
- (id)layerWithImage:(id)arg1;
- (void)layoutSubviews;
- (id)minuteTicks;
- (id)pillLayerFromHourMarkerView:(id)arg1;
- (void)removeHourMarkers;
- (void)removeTemporaryHourMarkers;
- (void)setCircularHourTicks:(id)arg1;
- (void)setCircularMinuteTicks:(id)arg1;
- (void)setCircularPillMarkersCenterPointsCalculated:(bool)arg1;
- (void)setCircularTicksHidden:(bool)arg1;
- (void)setCircularTicksMulticolor:(id)arg1;
- (void)setColor:(unsigned long long)arg1;
- (void)setColorInHourMarkerView:(id)arg1 color:(id)arg2;
- (void)setColorPalette:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDial:(unsigned long long)arg1;
- (void)setFullscreenTicksMulticolor:(id)arg1;
- (void)setHourMarkers:(id)arg1;
- (void)setHourTicks:(id)arg1;
- (void)setHourTicksColor:(id)arg1;
- (void)setMinuteTicks:(id)arg1;
- (void)setMinuteTicksColor:(id)arg1;
- (void)setShowingStatusIcon:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setStyleTransitionHandler:(id)arg1;
- (void)setTemporaryHourMarkers:(id)arg1;
- (void)setTemporaryHourMarkersDial:(unsigned long long)arg1;
- (void)setTemporaryHourMarkersStyle:(unsigned long long)arg1;
- (bool)showingStatusIcon;
- (unsigned long long)style;
- (id)styleTransitionHandler;
- (id)temporaryHourMarkers;
- (unsigned long long)temporaryHourMarkersDial;
- (unsigned long long)temporaryHourMarkersStyle;
- (id)textForDigit:(unsigned long long)arg1 style:(unsigned long long)arg2;

@end
