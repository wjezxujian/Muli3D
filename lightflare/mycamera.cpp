
#include "mycamera.h"
#include "../libappframework/include/graphics.h"
#include "../libappframework/include/scene.h"
#include "../libappframework/include/application.h"

CMyCamera::CMyCamera( class CGraphics *i_pParent ) : CCamera( i_pParent )
{

}

void CMyCamera::RenderPass( int32 i_iPass )
{
	CScene *pScene = m_pParent->pGetParent()->pGetScene();

	if( i_iPass == -1 || i_iPass == ePass_Leaf )
		pScene->Render( ePass_Leaf );

	if( i_iPass == -1 || i_iPass == ePass_SphericalLight )
		pScene->Render( ePass_SphericalLight );
}
