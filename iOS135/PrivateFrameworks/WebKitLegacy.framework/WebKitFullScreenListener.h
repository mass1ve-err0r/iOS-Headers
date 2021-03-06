/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener> {
    struct RefPtr<WebCore::Element, WTF::DumbPtrTraits<WebCore::Element> > { 
        struct Element {} *m_ptr; 
    }  _element;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithElement:(struct Element { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; unsigned int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; struct CompactPointerTuple<WebCore::RenderObject *, unsigned char> { unsigned long long x_9_1_1; } x9; struct unique_ptr<WebCore::NodeRareData, WebCore::Node::NodeRareDataDeleter> { struct __compressed_pair<WebCore::NodeRareData *, WebCore::Node::NodeRareDataDeleter> { struct NodeRareData {} *x_1_2_1; } x_10_1_1; } x10; struct WeakPtrFactory<WebCore::ContainerNode> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_11_1_1; } x11; struct Node {} *x12; struct Node {} *x13; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl, WTF::DumbPtrTraits<WebCore::QualifiedName::QualifiedNameImpl> > { struct QualifiedNameImpl {} *x_1_2_1; } x_14_1_1; } x14; struct RefPtr<WebCore::ElementData, WTF::DumbPtrTraits<WebCore::ElementData> > { struct ElementData {} *x_15_1_1; } x15; }*)arg1;
- (void)webkitDidEnterFullScreen;
- (void)webkitDidExitFullScreen;
- (void)webkitWillEnterFullScreen;
- (void)webkitWillExitFullScreen;

@end
