// This file is part of Milton.
//
// Milton is free software: you can redistribute it and/or modify it under the
// terms of the GNU Lesser General Public License as published by the Free
// Software Foundation, either version 3 of the License, or (at your option)
// any later version.
//
// Milton is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Milton.  If not, see <http://www.gnu.org/licenses/>.


struct WorkerParams {
    MiltonState* milton_state;
    i32 worker_id;
};

// Declared here so that the workers get launched from the init function.
int renderer_worker_thread(/* WorkerParams* */void* data);

// Blocking function. When it returns, the framebuffer is updated to the
// current state. It does a lot of smart things to do as little work as
// possible. Most users on most machines should get interactive framerates.
void milton_render(MiltonState* milton_state, MiltonRenderFlags render_flags);

