/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheetAssistant : NSObject <DDDetectionControllerInteractionDelegate, WKActionSheetDelegate> {
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    }  _elementInfo;
    bool  _hasPendingActionSheet;
    struct RetainPtr<WKActionSheet> { 
        void *m_ptr; 
    }  _interactionSheet;
    bool  _isPresentingDDUserInterface;
    bool  _needsLinkIndicator;
    struct Optional<WebKit::InteractionInformationAtPosition> { 
        bool init_; 
        union storage_t<WebKit::InteractionInformationAtPosition> { 
            unsigned char dummy_; 
            struct InteractionInformationAtPosition { 
                struct InteractionInformationRequest { 
                    struct IntPoint { 
                        int m_x; 
                        int m_y; 
                    } point; 
                    bool includeSnapshot; 
                    bool includeLinkIndicator; 
                    bool includeCaretContext; 
                    bool linkIndicatorShouldHaveLegacyMargins; 
                } request; 
                bool canBeValid; 
                bool nodeAtPositionHasDoubleClickHandler; 
                bool isSelectable; 
                bool prefersDraggingOverTextSelection; 
                bool isNearMarkedText; 
                bool touchCalloutEnabled; 
                bool isLink; 
                bool isImage; 
                bool isAttachment; 
                bool isAnimatedImage; 
                bool isElement; 
                unsigned long long containerScrollingNodeID; 
                bool isDataDetectorLink; 
                bool preventTextInteraction; 
                bool shouldNotUseIBeamInEditableContent; 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } adjustedPointForNodeRespondingToClickEvents; 
                struct URL { 
                    struct String { 
                        struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } m_string; 
                    unsigned int m_isValid : 1; 
                    unsigned int m_protocolIsInHTTPFamily : 1; 
                    unsigned int m_cannotBeABaseURL : 1; 
                    unsigned int m_portLength : 3; 
                    unsigned int m_schemeEnd : 26; 
                    unsigned int m_userStart; 
                    unsigned int m_userEnd; 
                    unsigned int m_passwordEnd; 
                    unsigned int m_hostEnd; 
                    unsigned int m_pathAfterLastSlash; 
                    unsigned int m_pathEnd; 
                    unsigned int m_queryEnd; 
                } url; 
                struct URL { 
                    struct String { 
                        struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } m_string; 
                    unsigned int m_isValid : 1; 
                    unsigned int m_protocolIsInHTTPFamily : 1; 
                    unsigned int m_cannotBeABaseURL : 1; 
                    unsigned int m_portLength : 3; 
                    unsigned int m_schemeEnd : 26; 
                    unsigned int m_userStart; 
                    unsigned int m_userEnd; 
                    unsigned int m_passwordEnd; 
                    unsigned int m_hostEnd; 
                    unsigned int m_pathAfterLastSlash; 
                    unsigned int m_pathEnd; 
                    unsigned int m_queryEnd; 
                } imageURL; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } title; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } idAttribute; 
                struct IntRect { 
                    struct IntPoint { 
                        int m_x; 
                        int m_y; 
                    } m_location; 
                    struct IntSize { 
                        int m_width; 
                        int m_height; 
                    } m_size; 
                } bounds; 
                struct RefPtr<WebKit::ShareableBitmap, WTF::DumbPtrTraits<WebKit::ShareableBitmap> > { 
                    struct ShareableBitmap {} *m_ptr; 
                } image; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } textBefore; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } textAfter; 
                float caretHeight; 
                struct FloatRect { 
                    struct FloatPoint { 
                        float m_x; 
                        float m_y; 
                    } m_location; 
                    struct FloatSize { 
                        float m_width; 
                        float m_height; 
                    } m_size; 
                } lineCaretExtent; 
                struct Optional<WebCore::Cursor> { 
                    bool init_; 
                    union storage_t<WebCore::Cursor> { 
                        unsigned char dummy_; 
                        struct Cursor { 
                            int m_type; 
                            struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { 
                                struct Image {} *m_ptr; 
                            } m_image; 
                            struct IntPoint { 
                                int m_x; 
                                int m_y; 
                            } m_hotSpot; 
                            void *m_platformCursor; 
                        } value_; 
                    } storage_; 
                } cursor; 
                struct TextIndicatorData { 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } selectionRectInRootViewCoordinates; 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } textBoundingRectInRootViewCoordinates; 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } contentImageWithoutSelectionRectInRootViewCoordinates; 
                    struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { 
                        struct FloatRect {} *m_buffer; 
                        unsigned int m_capacity; 
                        unsigned int m_size; 
                    } textRectsInBoundingRectCoordinates; 
                    float contentImageScaleFactor; 
                    struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { 
                        struct Image {} *m_ptr; 
                    } contentImageWithHighlight; 
                    struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { 
                        struct Image {} *m_ptr; 
                    } contentImageWithoutSelection; 
                    struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { 
                        struct Image {} *m_ptr; 
                    } contentImage; 
                    struct Color { 
                        union { 
                            unsigned long long rgbaAndFlags; 
                            struct ExtendedColor {} *extendedColor; 
                        } m_colorData; 
                    } estimatedBackgroundColor; 
                    unsigned char presentationTransition; 
                    unsigned short options; 
                } linkIndicator; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } dataDetectorIdentifier; 
                struct RetainPtr<NSArray> { 
                    void *m_ptr; 
                } dataDetectorResults; 
                struct Optional<WebCore::ElementContext> { 
                    bool init_; 
                    union constexpr_storage_t<WebCore::ElementContext> { 
                        unsigned char dummy_; 
                        struct ElementContext { 
                            struct FloatRect { 
                                struct FloatPoint { 
                                    float m_x; 
                                    float m_y; 
                                } m_location; 
                                struct FloatSize { 
                                    float m_width; 
                                    float m_height; 
                                } m_size; 
                            } boundingRect; 
                            struct ObjectIdentifier<WebCore::PageIdentifierType> { 
                                unsigned long long m_identifier; 
                            } webPageIdentifier; 
                            struct ObjectIdentifier<WebCore::DocumentIdentifierType> { 
                                unsigned long long m_identifier; 
                            } documentIdentifier; 
                            struct ObjectIdentifier<WebCore::ElementIdentifierType> { 
                                unsigned long long m_identifier; 
                            } elementIdentifier; 
                        } value_; 
                    } storage_; 
                } elementContext; 
            } value_; 
        } storage_; 
    }  _positionInformation;
    struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKActionSheetAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsLinkIndicator;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(bool)arg3;
- (id)_elementActionForDDAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForSheetGivenPoint:(struct CGPoint { double x1; double x2; })arg1 inHostView:(id)arg2;
- (long long)_presentationStyleForPositionInfo:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; bool x_1_1_4; bool x_1_1_5; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; bool x14; bool x15; bool x16; struct FloatPoint { float x_17_1_1; float x_17_1_2; } x17; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_18_1_1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 3; unsigned int x_18_1_6 : 26; unsigned int x_18_1_7; unsigned int x_18_1_8; unsigned int x_18_1_9; unsigned int x_18_1_10; unsigned int x_18_1_11; unsigned int x_18_1_12; unsigned int x_18_1_13; } x18; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_19_1_1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 3; unsigned int x_19_1_6 : 26; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; unsigned int x_19_1_11; unsigned int x_19_1_12; unsigned int x_19_1_13; } x19; }*)arg1 elementInfo:(id)arg2;
- (void)cleanupSheet;
- (id)currentAvailableActionTitles;
- (struct Optional<WebKit::InteractionInformationAtPosition> { bool x1; union storage_t<WebKit::InteractionInformationAtPosition> { unsigned char x_2_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; bool x_1_3_4; bool x_1_3_5; } x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; unsigned long long x_2_2_13; bool x_2_2_14; bool x_2_2_15; bool x_2_2_16; struct FloatPoint { float x_17_3_1; float x_17_3_2; } x_2_2_17; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_18_3_1; unsigned int x_18_3_2 : 1; unsigned int x_18_3_3 : 1; unsigned int x_18_3_4 : 1; unsigned int x_18_3_5 : 3; unsigned int x_18_3_6 : 26; unsigned int x_18_3_7; unsigned int x_18_3_8; unsigned int x_18_3_9; unsigned int x_18_3_10; unsigned int x_18_3_11; unsigned int x_18_3_12; unsigned int x_18_3_13; } x_2_2_18; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_19_3_1; unsigned int x_19_3_2 : 1; unsigned int x_19_3_3 : 1; unsigned int x_19_3_4 : 1; unsigned int x_19_3_5 : 3; unsigned int x_19_3_6 : 26; unsigned int x_19_3_7; unsigned int x_19_3_8; unsigned int x_19_3_9; unsigned int x_19_3_10; unsigned int x_19_3_11; unsigned int x_19_3_12; unsigned int x_19_3_13; } x_2_2_19; } x_2_1_2; } x2; })currentPositionInformation;
- (void)dealloc;
- (struct RetainPtr<NSArray<_WKElementAction *> > { void *x1; })defaultActionsForImageSheet:(id)arg1;
- (struct RetainPtr<NSArray<_WKElementAction *> > { void *x1; })defaultActionsForLinkSheet:(id)arg1;
- (id)delegate;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet;
- (void)interactionDidStartWithPositionInformation:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; bool x_1_1_4; bool x_1_1_5; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; bool x14; bool x15; bool x16; struct FloatPoint { float x_17_1_1; float x_17_1_2; } x17; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_18_1_1; unsigned int x_18_1_2 : 1; unsigned int x_18_1_3 : 1; unsigned int x_18_1_4 : 1; unsigned int x_18_1_5 : 3; unsigned int x_18_1_6 : 26; unsigned int x_18_1_7; unsigned int x_18_1_8; unsigned int x_18_1_9; unsigned int x_18_1_10; unsigned int x_18_1_11; unsigned int x_18_1_12; unsigned int x_18_1_13; } x18; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_19_1_1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 3; unsigned int x_19_1_6 : 26; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned int x_19_1_9; unsigned int x_19_1_10; unsigned int x_19_1_11; unsigned int x_19_1_12; unsigned int x_19_1_13; } x19; }*)arg1;
- (bool)isShowingSheet;
- (bool)needsLinkIndicator;
- (bool)presentSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForElementUsingClosestIndicatedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForIndicatedElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLinkIndicator:(bool)arg1;
- (void)showDataDetectorsSheet;
- (void)showImageSheet;
- (void)showLinkSheet;
- (id)superviewForSheet;
- (bool)synchronouslyRetrievePositionInformation;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end